
/* ==== FUN_00414f30 @ 00414f30 ==== 
 * signature: undefined __cdecl FUN_00414f30(int param_1)
 * body: 00414f30-004150d0
 */

void __cdecl FUN_00414f30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c [2];
  float local_4;
  
  local_18 = 0;
  local_14 = 0.0;
  iVar4 = param_1 * 0x38;
  local_10 = 0;
  local_24 = 0;
  iVar3 = (&DAT_005d1ba8)[param_1 * 0xe];
  local_20 = 0;
  local_1c = 0;
  if (*(int *)(&DAT_005d1bbc + iVar4) == 0) {
    *(undefined4 *)(&DAT_005d1bbc + iVar4) = 1;
    iVar1 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    iVar2 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    local_c[0] = *(float *)(&DAT_00709f34 + iVar1 * 0x340) -
                 *(float *)(&DAT_00709f24 + iVar2 * 0x340);
    iVar1 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    iVar2 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    local_4 = *(float *)(&DAT_00709f3c + iVar1 * 0x340) - *(float *)(&DAT_00709f2c + iVar2 * 0x340);
    fVar5 = FUN_00414ec0(local_c);
    local_14 = (float)-fVar5;
    iVar1 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    local_24 = *(undefined4 *)(&DAT_00709f24 + iVar1 * 0x340);
    iVar1 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    local_20 = *(undefined4 *)(&DAT_00709f28 + iVar1 * 0x340);
    iVar1 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    local_1c = *(undefined4 *)(&DAT_00709f2c + iVar1 * 0x340);
    (**(code **)(**(int **)(iVar3 * 0xf0 + 0x10 + DAT_00715e50) + 0x10))(&local_24,&local_18);
  }
  iVar3 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  if (*(int *)(&DAT_005d1bbc + iVar4) < *(int *)(&DAT_00709f1c + iVar3 * 0x340)) {
    FUN_00414640(param_1);
  }
  return;
}


