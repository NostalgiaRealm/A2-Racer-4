
/* ==== FUN_00403946 @ 00403946 ==== 
 * signature: undefined FUN_00403946(void)
 * body: 00403946-00403947
 */

void __fastcall FUN_00403946(char param_1,undefined2 param_2)

{
  undefined1 uVar1;
  int unaff_EBX;
  undefined1 *unaff_EDI;
  
  uVar1 = in(param_2);
  *unaff_EDI = uVar1;
  *(char *)(unaff_EBX + 0x5f5e0845) = *(char *)(unaff_EBX + 0x5f5e0845) + param_1;
  return;
}


