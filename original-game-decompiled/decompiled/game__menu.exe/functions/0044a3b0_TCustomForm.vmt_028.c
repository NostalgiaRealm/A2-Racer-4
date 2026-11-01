
/* ==== TCustomForm.vmt_028 @ 0044a3b0 ==== 
 * signature: undefined4 __register TCustomForm.vmt_028(void)
 * body: 0044a3b0-0044a400
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TCustomForm_vmt_028(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  int *in_stack_0000000c;
  
  cVar1 = IsEqualGUID();
  if ((cVar1 == '\0') && (cVar1 = IsEqualGUID(), cVar1 == '\0')) {
    uVar2 = TComponent_vmt_028();
    return uVar2;
  }
  FUN_00405878(in_stack_0000000c,*(int **)(in_stack_00000004 + 0x238));
  return 0;
}


