
/* ==== TDragControlObject.vmt_004 @ 00422118 ==== 
 * signature: undefined TDragControlObject.vmt_004(void)
 * body: 00422118-0042212f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined2 TDragControlObject_vmt_004(int param_1,char param_2)

{
  undefined2 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = 0xfff3;
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x38) + 0x6a);
  }
  return uVar1;
}


