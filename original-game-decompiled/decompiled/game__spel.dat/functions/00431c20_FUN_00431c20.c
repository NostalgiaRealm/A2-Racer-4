
/* ==== FUN_00431c20 @ 00431c20 ==== 
 * signature: int __cdecl FUN_00431c20(int param_1)
 * body: 00431c20-00431d4b
 */

int __cdecl FUN_00431c20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0x28;
  if (0 < param_1) {
    iVar1 = 0x28;
    iVar2 = param_1;
    do {
      FUN_004c5930(0,0,iVar1,&DAT_00598024);
      iVar1 = iVar1 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004c5930(0,0,0x28,&DAT_00598028);
  iVar2 = FUN_004c5e40(0x20);
  while( true ) {
    if (iVar2 != 0) {
      FUN_00431ad0(0x20);
      return iVar4;
    }
    iVar2 = FUN_004c5e40(0x26);
    if (iVar2 != 0) {
      FUN_004c5930(0,0,iVar3,&DAT_0059802c);
      iVar4 = iVar4 + -1;
      iVar3 = iVar3 + -0x14;
      if (iVar4 < 0) {
        iVar4 = param_1 + -1;
        iVar3 = (iVar4 * 5 + 10) * 4;
      }
      FUN_004c5930(0,0,iVar3,&DAT_00598030);
      FUN_00431ad0(0x26);
    }
    iVar2 = FUN_004c5e40(0x28);
    if (iVar2 != 0) {
      FUN_004c5930(0,0,iVar3,&DAT_00598034);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x14;
      if (param_1 <= iVar4) {
        iVar4 = 0;
        iVar3 = 0x28;
      }
      FUN_004c5930(0,0,iVar3,&DAT_00598038);
      FUN_00431ad0(0x28);
    }
    iVar2 = FUN_004c5e40(0x1b);
    if (iVar2 != 0) break;
    iVar2 = FUN_004c5e40(0x20);
  }
  FUN_00431ad0(0x1b);
  return -1;
}


