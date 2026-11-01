
/* ==== TDaviSpeedButton.dyn_b005 @ 00475fb0 ==== 
 * signature: undefined __register TDaviSpeedButton.dyn_b005(int * param_1, int param_2)
 * body: 00475fb0-0047601d
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviSpeedButton_dyn_b005(int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if ((((*(short *)(param_2 + 4) == 0xd) && ((char)param_1[0x4c] != '\0')) ||
      ((*(short *)(param_2 + 4) == 0x1b && (*(char *)((int)param_1 + 0x129) != '\0')))) &&
     (((bVar1 = FUN_0044476c(*(uint *)(param_2 + 8)), bVar1 == 0 &&
       (cVar2 = FUN_004761b4(param_1), cVar2 != '\0')) && (DAT_004ab184 != '\0')))) {
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


