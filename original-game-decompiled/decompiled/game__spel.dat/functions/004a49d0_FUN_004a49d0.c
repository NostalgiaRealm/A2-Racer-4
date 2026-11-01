
/* ==== FUN_004a49d0 @ 004a49d0 ==== 
 * signature: undefined __thiscall FUN_004a49d0(void * this, int param_1)
 * body: 004a49d0-004a4b52;004a4b54-004a4b8b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a4b53-004a4b53
 */

void __thiscall FUN_004a49d0(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  char *_Str1;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uStack_6c;
  undefined1 auStack_68 [4];
  char *pcStack_64;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined **appuStack_28 [3];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056f1d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (*(code *)**(undefined4 **)((int)this + 8))();
  iVar9 = 0;
  if (0 < iVar2) {
    do {
      pcVar6 = "";
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        pcVar6 = *(char **)(param_1 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)(*(int *)((int)this + 0xc) + 4) + iVar9 * 4) + 8);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar3 = __strcmpi(_Str1,pcVar6);
      if (iVar3 == 0) {
        if (iVar9 != -1) {
          uStack_6c = (**(code **)**(undefined4 **)
                                    (*(int *)(*(int *)((int)this + 0xc) + 4) + iVar9 * 4))();
          FUN_004a5620(*(void **)((int)this + 4),
                       *(undefined4 **)((int)*(void **)((int)this + 4) + 8),1,&uStack_6c);
          ExceptionList = pvStack_c;
          return;
        }
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar2);
  }
  auStack_68[0] = (undefined1)param_1;
  FUN_004028f0(auStack_68,'\0');
  uVar7 = 0xffffffff;
  pcVar6 = s_Unable_to_find_typecreator___005af570;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  uVar4 = FUN_00402a00(auStack_68,uVar7,'\x01');
  if ((char)uVar4 != '\0') {
    pcVar6 = s_Unable_to_find_typecreator___005af570;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcStack_64 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcStack_64 = pcStack_64 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcStack_64 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcStack_64 = pcStack_64 + 1;
    }
    FUN_004029e0(auStack_68,uVar7);
  }
  uStack_4 = 0;
  puVar5 = FUN_0049df90(auStack_58,(byte *)s_FacMan_exception_in___s___d__005af2bc);
  uStack_4._0_1_ = 1;
  puVar5 = FUN_0047c9a0(auStack_48,puVar5,(int)auStack_68);
  uStack_4._0_1_ = 2;
  puVar5 = FUN_0047c9a0(auStack_38,puVar5,param_1);
  uStack_4._0_1_ = 3;
  FUN_00558826(appuStack_28);
  auStack_1c[0] = (undefined1)param_1;
  FUN_004028f0(auStack_1c,'\0');
  uStack_4._0_1_ = 5;
  appuStack_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(auStack_1c,puVar5,0,0xffffffff);
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(appuStack_28,&DAT_00583558);
}


