"""! @package DoxygenDocumentation
Documentation for this module.

More details.
"""

def func(a, b):
    """!Documentation for a function.

    More details.

    @param a First number
    @param b Second number
    """
    ##this is an inline comment, used for variables mainly
    c = a+b
    return c

class PyClass:
    """!Documentation for a class.

    More details regarding the class.
    """

    def __init__(self):
        """!The constructor.

           More details about constructor.
        """
        self._memVar = 0;

    def PyMethod(self, x, y, z):
        """!Documentation for a method.

           More details about the method.

           @param x blablabla
           @param y blablabla
           @param z blablabla
        """
        pass
