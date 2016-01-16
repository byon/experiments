module dynamic_intermediate

  use say_dynamic_hello
  implicit none

  private
  public :: do_dynamic

contains

  subroutine do_dynamic()
    print *, "doing the dynamic"
    call say_hello()
  end subroutine
end module
