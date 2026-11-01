
/* ==== TCustomForm.dyn_b03f @ 0043f8dc ==== 
 * signature: undefined __register TCustomForm.dyn_b03f(int * param_1, int param_2, undefined4 param_3)
 * body: 0043f8dc-0043f92d
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_b03f(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && ((char)param_1[0x5a] != '\0')) {
    uVar1 = FUN_0043f830((int *)param_1[0x82],param_2,param_3,(int)&stack0xfffffffc);
    if (((char)uVar1 == '\0') &&
       ((uVar1 = FUN_0043f830(param_1,extraout_EDX,puVar2,(int)&stack0xfffffffc),
        (char)uVar1 == '\0' &&
        (uVar1 = FUN_0043f860((int)param_1,extraout_EDX_00,puVar3,(int)&stack0xfffffffc),
        (char)uVar1 == '\0')))) {
      return;
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}


