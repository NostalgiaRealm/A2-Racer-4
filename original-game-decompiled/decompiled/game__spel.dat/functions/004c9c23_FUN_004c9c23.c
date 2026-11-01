
/* ==== FUN_004c9c23 @ 004c9c23 ==== 
 * signature: bool __stdcall FUN_004c9c23(void)
 * body: 004c9c23-004c9c81
 */

bool FUN_004c9c23(void)

{
  int iVar1;
  int *unaff_EDI;
  undefined1 *puStack00000008;
  undefined4 uStack0000000c;
  
  puStack00000008 = &stack0x00000030;
  uStack0000000c = 0x1000000;
  iVar1 = (**(code **)(*unaff_EDI + 0x14))();
  return (bool)('\x01' - (iVar1 != 0));
}


