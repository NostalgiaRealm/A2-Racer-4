
/* ==== FUN_0049b0b5 @ 0049b0b5 ==== 
 * signature: undefined4 __thiscall FUN_0049b0b5(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0049b0b5-0049b0bf
 */

undefined4 __thiscall
FUN_0049b0b5(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_24 [4];
  char *pcStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [12];
  void *pvStack_8;
  void *pvStack_4;
  
  pvStack_4 = ExceptionList;
  ExceptionList = &pvStack_4;
  iVar2 = FUN_0049bd10(*(void **)((int)this + 0x3c),param_4);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0049bd10(*(void **)((int)this + 0x3c),param_4);
    (**(code **)(*piVar3 + 8))(param_3);
    ExceptionList = pvStack_8;
    return param_3;
  }
  auStack_24[0] = (undefined1)param_4;
  uVar5 = 0xffffffff;
  pcVar7 = s_index_out_of_bounds_in_CRegVarAr_005ae5a8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  pcStack_20 = (char *)0x0;
  uStack_1c = 0;
  uStack_18 = 0;
  uVar4 = FUN_00402a00(auStack_24,uVar5,'\x01');
  if ((char)uVar4 != '\0') {
    pcVar7 = s_index_out_of_bounds_in_CRegVarAr_005ae5a8;
    pcVar8 = pcStack_20;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pcStack_20[uVar5] = '\0';
    uStack_1c = uVar5;
  }
  auStack_14[0] = (undefined1)param_4;
  FUN_004028f0(auStack_14,'\0');
  FUN_004093c0(auStack_14,auStack_24,0,0xffffffff);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(auStack_14,&DAT_005828d8);
}


