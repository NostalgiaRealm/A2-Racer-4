
/* ==== TButton.dyn_b005 @ 00428aec ==== 
 * signature: undefined __register TButton.dyn_b005(int * param_1, int param_2)
 * body: 00428aec-00428b54
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TButton_dyn_b005(int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_EDX;
  undefined4 extraout_EDX_00;
  
  if (((*(short *)(param_2 + 4) == 0xd) && (*(char *)((int)param_1 + 0x1fa) != '\0')) ||
     ((*(short *)(param_2 + 4) == 0x1b && (*(char *)((int)param_1 + 0x1f9) != '\0')))) {
    bVar1 = FUN_0044476c(*(uint *)(param_2 + 8));
    if ((bVar1 == 0) &&
       (cVar2 = FUN_00403178(param_1,extraout_EDX & 0xffffff00,extraout_ECX), cVar2 != '\0')) {
      FUN_00403178(param_1,extraout_EDX_00,extraout_ECX_00);
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
  }
  TWinControl_dyn_b005((int)param_1,param_2);
  return;
}


