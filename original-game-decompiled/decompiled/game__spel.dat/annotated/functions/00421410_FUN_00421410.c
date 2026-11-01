
/* ==== FUN_00421410 @ 00421410 ==== 
 * signature: bool __cdecl FUN_00421410(int param_1)
 * body: 00421410-00421482
 */

bool __cdecl FUN_00421410(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  puVar1 = FUN_0040ebe0();
  if (-1 < iVar3) {
    iVar2 = (*(code *)**(undefined4 **)(puVar1 + 0x24))();
    if (iVar3 < iVar2) {
      iVar3 = 1;
      goto LAB_0042144c;
    }
  }
  iVar3 = 0;
LAB_0042144c:
  FUN_004a6980(iVar3,(byte *)s__s__d____Invalid_object_index____0058fd14);
  uVar4 = (int)*(uint *)(&DAT_005cec0c + param_1 * 0x294) >> 0x1f;
  return 10 < (int)((*(uint *)(&DAT_005cec0c + param_1 * 0x294) ^ uVar4) - uVar4);
}


