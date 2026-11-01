
/* ==== FUN_00421830 @ 00421830 ==== 
 * signature: undefined __cdecl FUN_00421830(int param_1)
 * body: 00421830-004218a3
 */

void __cdecl FUN_00421830(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  puVar1 = FUN_0040ebe0();
  if (-1 < iVar3) {
    iVar2 = (*(code *)**(undefined4 **)(puVar1 + 0x24))();
    if (iVar3 < iVar2) {
      iVar3 = 1;
      goto LAB_0042186c;
    }
  }
  iVar3 = 0;
LAB_0042186c:
  FUN_004a6980(iVar3,(byte *)s__s__d____Invalid_object_index____0058fd14);
  iVar3 = FUN_00426f60(&DAT_005d3460,(&DAT_005ce9e8)[param_1 * 0xa5]);
  uVar4 = FUN_00425300(iVar3);
  *(undefined4 *)(&DAT_005cea4c + param_1 * 0x294) = uVar4;
  return;
}


