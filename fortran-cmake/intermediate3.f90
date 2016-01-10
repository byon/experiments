module intermediate3

  use say_hello
  implicit none

  private
  public :: do3

contains

  subroutine do3()
    call say()
  end subroutine
end module
