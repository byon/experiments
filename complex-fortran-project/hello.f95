module hello
  implicit none

  private
  public :: say_hello

  interface say_hello
     module procedure say_hello
  end interface say_hello

contains

  subroutine say_hello
    print *, "Hello World!"
  end subroutine say_hello

end module hello
