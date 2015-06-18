module static

  implicit none

  function fuffeli(who)
  end function fuffeli

  function hello(who), result(greeting)
    character, intent(in) :: who
    character(LEN:), allocatable :: result
    integer :: result_size

    result_size = LEN(who) + LEN("Hello !")
    allocate(result(LEN=result_size))
    result = "Hello " // who // "!"
  end function hello
end module static
