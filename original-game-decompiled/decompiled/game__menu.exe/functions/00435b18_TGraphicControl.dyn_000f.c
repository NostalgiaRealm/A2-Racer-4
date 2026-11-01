
/* ==== TGraphicControl.dyn_000f @ 00435b18 ==== 
 * signature: undefined __register TGraphicControl.dyn_000f(int * param_1, int param_2)
 * body: 00435b18-00435b8f;00435bba-00435bbd
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TGraphicControl_dyn_000f(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  
  if (*(int *)(param_2 + 4) != 0) {
    puStack_10 = (undefined1 *)0x435b3a;
    FUN_0041912c(param_1[0x48]);
    pcStack_14 = thunk_FUN_004036bc;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    pcStack_1c = (code *)0x435b59;
    puStack_10 = &stack0xfffffffc;
    FUN_00419558((int *)param_1[0x48],*(int *)(param_2 + 4));
    pcStack_20 = thunk_FUN_004036bc;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    pcStack_1c = (code *)&stack0xfffffffc;
    (**(code **)(*param_1 + 0x84))();
    *in_FS_OFFSET = uStack_24;
    pcStack_1c = FUN_00435b97;
    pcStack_20 = (code *)0x435b8f;
    FUN_00419558((int *)param_1[0x48],0);
    return;
  }
  return;
}


