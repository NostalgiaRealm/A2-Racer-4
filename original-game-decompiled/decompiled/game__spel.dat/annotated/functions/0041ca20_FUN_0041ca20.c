
/* ==== FUN_0041ca20 @ 0041ca20 ==== 
 * signature: undefined __cdecl FUN_0041ca20(int param_1)
 * body: 0041ca20-0041cadc
 */

void __cdecl FUN_0041ca20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  iVar2 = param_1;
  iVar1 = *(int *)(param_1 * 0xf0 + 0x34 + DAT_00715e50);
  FUN_004af5a0(iVar1,DAT_006fb8b0 + -1,&local_4,&local_8,&local_c,&param_1);
  piVar5 = &DAT_005d1ba8;
  do {
    if (((*piVar5 != -1) && (((byte)piVar5[4] & 3) == 1)) &&
       (*(int *)(*piVar5 * 0xf0 + 0x5c + DAT_00715e50) == 0)) {
      iVar3 = FUN_00429360(iVar2);
      if (iVar3 == 1) {
        uVar4 = DAT_006fb8b0 + -1 + iVar1;
      }
      else {
        uVar4 = (iVar1 - DAT_006fb8b0) + 1;
      }
      uVar4 = FUN_004a71e0(uVar4);
      FUN_0041cae0(*piVar5,uVar4);
    }
    piVar5 = piVar5 + 0xe;
  } while ((int)piVar5 < 0x5d2698);
  return;
}


