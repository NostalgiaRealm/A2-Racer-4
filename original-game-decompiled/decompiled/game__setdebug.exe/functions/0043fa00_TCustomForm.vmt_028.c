
/* ==== TCustomForm.vmt_028 @ 0043fa00 ==== 
 * signature: undefined4 __register TCustomForm.vmt_028(void)
 * body: 0043fa00-0043fa50
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TCustomForm_vmt_028(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  int *in_stack_0000000c;
  
  cVar1 = FUN_0040ca60();
  if ((cVar1 == '\0') && (cVar1 = func_0x0040ca64(), cVar1 == '\0')) {
    uVar2 = TComponent_vmt_028();
    return uVar2;
  }
  FUN_00405308(in_stack_0000000c,*(int **)(in_stack_00000004 + 0x238));
  return 0;
}


