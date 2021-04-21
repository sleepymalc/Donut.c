#!/usr/bin/env python3

from manim import *
import math

# manim donut_explain.py DonutExplain -r1280,720 -pqm
# manim donut_explain.py DonutExplain -r640,360 -pql


class Torus(Arc):
    def __init__(self, **kwargs):
        self.color = RED
        self.close_new_points = True
        self.anchors_span_full_range = False
        self.show_dot = True
        Arc.__init__(self, 0, TAU, **kwargs)

    def surround(self, mobject, dim_to_match=0, stretch=False, buffer_factor=1.2):
        # Ignores dim_to_match and stretch; result will always be a circle
        # TODO: Perhaps create an ellipse class to handle singele-dimension stretching

        # Something goes wrong here when surrounding lines?
        # TODO: Figure out and fix
        self.replace(mobject, dim_to_match, stretch)

        self.set_width(
            np.sqrt(mobject.get_width()**2 + mobject.get_height()**2)
        )
        self.scale(buffer_factor)

    def point_at_angle(self, angle):
        start_angle = angle_of_vector(
            self.points[0] - self.get_center()
        )
        return self.point_from_proportion(
            (angle - start_angle) / TAU
        )


class DonutExplain(ThreeDScene):
    def __init__(self, **kwargs):
        self.r1 = 1
        self.r2 = 2
        self.step = 36
        ThreeDScene.__init__(self, **kwargs)

    def construct(self):
        axes = ThreeDAxes()
        self.add(axes)
        t1 = Torus(radius=self.r1)
        t1.set_stroke(opacity=0.5)
        rotate1 = Rotate(t1, angle=PI/2, axis=RIGHT,
                         about_point=ORIGIN, run_time=2)
        self.add(t1)
        self.wait(3)
        self.move_camera(phi=75*DEGREES, theta=-105*DEGREES, run_time=3)
        self.wait(3)
        self.play(rotate1)
        self.move_camera(phi=90*DEGREES, theta=-90*DEGREES, run_time=3)
        self.wait(3)
        self.play(t1.animate.shift(RIGHT*self.r2), run_time=2)
        self.wait(3)
        t = t1
        self.move_camera(phi=75*DEGREES, theta=-105*DEGREES, run_time=2)
        self.begin_ambient_camera_rotation(rate=0.1)
        for i in range(self.step):
            t = t1.copy()
            rotate = Rotate(t, angle=TAU/self.step,
                            axis=OUT, about_point=ORIGIN)
            self.play(rotate, run_time=0.1)
            t1 = t

            if 0 == i % 3:
                h = math.cos(i/self.step * TAU)
                g = math.sin(i/self.step * TAU)
                t2 = Torus(radius=self.r2 + g)
                t2.set_stroke(color=BLUE, opacity=0.6)
                t2.shift(OUT*h)
                self.add(t2)
        self.wait(5)
        self.move_camera(phi=45*DEGREES, run_time=2)
        self.wait(5)
