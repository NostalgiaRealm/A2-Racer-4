
/* ==== TCustomGDIButton.dyn_b005 @ 00468418 ==== 
 * signature: undefined __register TCustomGDIButton.dyn_b005(int * param_1, int param_2)
 * body: 00468418-00468485
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomGDIButton_dyn_b005(int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if ((((*(short *)(param_2 + 4) == 0xd) && (uVar3 = FUN_00468310(param_1), (char)uVar3 != '\0')) ||
      ((*(short *)(param_2 + 4) == 0x1b && ((char)param_1[0x5e] != '\0')))) &&
     ((bVar1 = FUN_0044476c(*(uint *)(param_2 + 8)), bVar1 == 0 &&
      (cVar2 = (**(code **)(*param_1 + 0xac))(), cVar2 != '\0')))) {
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


