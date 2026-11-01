
/* ==== TDIB.Destroy @ 00455fec ==== 
 * signature: undefined __register TDIB.Destroy(int * param_1, char param_2)
 * body: 00455fec-0045602a
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDIB_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  piVar2 = FUN_00455f74(piVar1,extraout_EDX,extraout_ECX);
  FUN_00457048((int)piVar1,(int)piVar2);
  FUN_00402f9c((int *)piVar1[8]);
  TPersistent_Destroy(piVar1,(byte)extraout_EDX & 0xfc);
  if ('\0' < (char)(byte)extraout_EDX) {
    FUN_004032ec(piVar1);
  }
  return;
}


