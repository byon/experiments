module intermediate1

  use intermediate2
  implicit none

  private
  public :: do

contains

  subroutine do()
    call do2()
  end subroutine
end module
