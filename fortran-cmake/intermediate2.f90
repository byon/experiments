module intermediate2

  use intermediate3
  implicit none

  private
  public :: do2

contains

  subroutine do2()
    call do3()
  end subroutine
end module
