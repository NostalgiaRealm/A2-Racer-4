
/* ==== FUN_0046c968 @ 0046c968 ==== 
 * signature: undefined __register FUN_0046c968(int * param_1, char * param_2, int param_3, undefined4 param_4)
 * body: 0046c968-0046ca44
 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_0046c968(int *param_1,char *param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  LCID LVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  
  iVar11 = 0;
  iVar2 = (param_3 + 1) * -4;
  puVar4 = &stack0xffffffd4 + iVar2;
  do {
    puVar9 = puVar4;
    *(undefined4 *)(puVar9 + -4) = 0x46c997;
    iVar5 = FUN_00408b24(param_2);
    *(undefined4 *)(puVar9 + -4) = 0;
    *(undefined4 *)(puVar9 + -8) = 0;
    *(int *)(puVar9 + -0xc) = iVar5;
    *(char **)(puVar9 + -0x10) = param_2;
    *(undefined4 *)(puVar9 + -0x14) = 0;
    *(undefined4 *)(puVar9 + -0x18) = 0;
    *(undefined4 *)(puVar9 + -0x1c) = 0x46c9a8;
    iVar6 = MultiByteToWideChar(*(UINT *)(puVar9 + -0x18),*(DWORD *)(puVar9 + -0x14),
                                *(LPCSTR *)(puVar9 + -0x10),*(int *)(puVar9 + -0xc),
                                *(LPWSTR *)(puVar9 + -8),*(int *)(puVar9 + -4));
    iVar6 = iVar6 + 1;
    iVar3 = -(iVar6 * 2 + 3U & 0xfffffffc);
    if (iVar11 == 0) {
      *(int *)(&stack0xffffffd4 + iVar2) = (int)puVar9 + iVar3;
    }
    else {
      *(int *)(&stack0xffffffd4 + (param_3 - iVar11) * 4 + iVar2) = (int)puVar9 + iVar3;
    }
    *(int *)(puVar9 + iVar3 + -4) = iVar6;
    *(int *)(puVar9 + iVar3 + -8) = (int)puVar9 + iVar3;
    *(int *)(puVar9 + iVar3 + -0xc) = iVar5;
    *(char **)(puVar9 + iVar3 + -0x10) = param_2;
    *(undefined4 *)(puVar9 + iVar3 + -0x14) = 0;
    *(undefined4 *)(puVar9 + iVar3 + -0x18) = 0;
    *(undefined4 *)(puVar9 + iVar3 + -0x1c) = 0x46c9ed;
    MultiByteToWideChar(*(UINT *)(puVar9 + iVar3 + -0x18),*(DWORD *)(puVar9 + iVar3 + -0x14),
                        *(LPCSTR *)(puVar9 + iVar3 + -0x10),*(int *)(puVar9 + iVar3 + -0xc),
                        *(LPWSTR *)(puVar9 + iVar3 + -8),*(int *)(puVar9 + iVar3 + -4));
    *(undefined2 *)(puVar9 + iVar6 * 2 + iVar3 + -2) = 0;
    param_2 = param_2 + iVar5 + 1;
    iVar11 = iVar11 + 1;
    puVar4 = puVar9 + iVar3;
  } while (iVar11 != param_3);
  *(undefined4 *)(puVar9 + iVar3 + -4) = param_4;
  *(undefined4 *)(puVar9 + iVar3 + -8) = 0x46ca0c;
  LVar7 = GetThreadLocale();
  *(LCID *)(puVar9 + iVar3 + -8) = LVar7;
  *(int *)(puVar9 + iVar3 + -0xc) = param_3;
  *(undefined1 **)(puVar9 + iVar3 + -0x10) = &stack0xffffffd4 + iVar2;
  *(undefined **)(puVar9 + iVar3 + -0x14) = PTR_DAT_004ab644;
  *(int **)(puVar9 + iVar3 + -0x18) = param_1;
  pcVar1 = *(code **)(*param_1 + 0x14);
  puVar10 = puVar9 + iVar3 + -0x1c;
  *(undefined4 *)(puVar9 + iVar3 + -0x1c) = 0x46ca24;
  uVar8 = (*pcVar1)();
  if (uVar8 == 0x80020006) {
    *(undefined1 **)(puVar10 + -4) = &stack0xfffffffc;
    *(undefined4 *)(puVar10 + -8) = 0x46ca31;
    FUN_0046c934();
  }
  else {
    *(undefined4 *)(puVar10 + -4) = 0x46ca39;
    FUN_0046c2c0(uVar8);
  }
  return;
}


