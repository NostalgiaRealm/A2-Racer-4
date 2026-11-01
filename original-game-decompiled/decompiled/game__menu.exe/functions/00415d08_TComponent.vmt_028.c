
/* ==== TComponent.vmt_028 @ 00415d08 ==== 
 * signature: undefined4 __register TComponent.vmt_028(void)
 * body: 00415d08-00415d47
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TComponent_vmt_028(void)

{
  char cVar1;
  undefined4 uVar2;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  
  if (in_stack_00000004[7] == 0) {
    cVar1 = FUN_00403030(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
    if (cVar1 == '\0') {
      uVar2 = 0x80004002;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)in_stack_00000004[7])();
  }
  return uVar2;
}


