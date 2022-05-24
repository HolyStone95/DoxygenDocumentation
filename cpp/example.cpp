ifndef MYCLASS_HH
#define MYCLASS_HH

/**
 * @file example.cpp
 * @brief This files does a lot of things
 * @author Iacopo Pietrasanta
 * @version 0.1
 * @date 05/2022
 */



/** @class myClass
*  @brief Dummy class used for illustration purposes. Doing something with it.
*
*  Detailed description follows here.
*  @author Iacopo Pietrasanta
*  @date May 2022
*/
class myClass{


   /** Constructor
   *
   *  Detailed description follows here.
   */
    myClass();


    /** Parametrized Constructor
    *
    *  Detailed description follows here.
    *
    *  @param x Description here
    *  @param y Description here
    *  @param z Description here
    */
    myClass(float x, float y, float z);


    /** Default Destructor
    *
    *  Detailed description follows here.
    */
    ~myClass();


  public:

    /** Print function
    *
    *  Detailed description follows here.
    *  @return void
    */
    void print();

    /** getDistance function
    *
    *  Calculate distance from origin.
    *   The distance is calculated with the formula
    *    \f$\sqrt{(x-x0)^2+(y-y0)^2+(z-z0)^2}\f$.
    *
    *  @param x - x coordinate of the point
    *  @param y - y coordinate of the point
    *  @param z - z coordinate of the point
    *  @return float Distance to point.
    */
    float getDistance(float x, float y, float z);

  private:
    float _x0;/**<initial x-coordinate*/
    float _y0;/**<initial y-coordinate*/
    float _z0;/**<initial z-coordinate*/

};

#endif
