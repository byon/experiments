program circle_calculations
  implicit none

  real :: radius
  real, parameter :: PI = 3.14

  radius = ask_for_radius()

  call print_value("Circumference of a circle ", circumference(radius))
  call print_value("Surface of a circle ", surface(radius))
  call print_value("Volume of a sphere ", volume(radius))

contains

  function ask_for_radius() result(radius)
    real :: radius
    print *, "Give radius of a circle"
    read (*, *) radius
  end function ask_for_radius

  subroutine print_value(identifier, value_to_print)
    character(len=*), intent(in) :: identifier
    real, intent(in) :: value_to_print

    write (*, "(a,f10.2)") identifier, value_to_print
  end subroutine print_value

  function circumference(radius) result(c)
    real, intent(in) :: radius
    real :: c
    c = 2 * radius * PI
  end function circumference

  function surface(radius) result(s)
    real, intent(in) :: radius
    real :: s
    s = PI * radius ** 2
  end function surface

  function volume(radius) result(v)
    real, intent(in) :: radius
    real :: v
    v = 4.0 / 3 * PI * radius ** 3
  end function volume

end program circle_calculations
