
/* ==== FUN_00442e88 @ 00442e88 ==== 
 * signature: undefined __register FUN_00442e88(int param_1, int * param_2)
 * body: 00442e88-0044321f
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00442e88(int param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  LONG LVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  DWORD extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  LONG *pLVar7;
  tagRECT *ptVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 uStack_ac;
  code *pcStack_a8;
  code *pcStack_a4;
  undefined4 *local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  LONG local_84 [4];
  tagRECT local_74;
  undefined4 local_64;
  undefined *local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  tagRECT local_4c;
  int local_3c;
  undefined4 local_38;
  UINT local_34;
  UINT local_30;
  undefined *local_2c;
  undefined4 local_28;
  bool local_21;
  tagPOINT local_20;
  int local_18;
  int local_14;
  POINT local_10;
  int local_8;
  
  bVar9 = 0;
  local_90 = 0;
  local_94 = (undefined4 *)0x0;
  local_10.x = *param_2;
  local_10.y = param_2[1];
  pcStack_a4 = (code *)0x442eba;
  local_8 = param_1;
  FUN_00404168((int)&local_64,(int)&DAT_0043975c);
  pcStack_a8 = thunk_FUN_00403434;
  uStack_ac = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_ac;
  *(undefined1 *)(local_8 + 0x48) = 0;
  pcStack_a4 = (code *)&stack0xfffffffc;
  if ((*(char *)(local_8 + 0x78) != '\0') &&
     (pcStack_a4 = (code *)&stack0xfffffffc, *(int *)(local_8 + 0x50) != 0)) {
    pcStack_a4 = (code *)&stack0xfffffffc;
    cVar1 = FUN_00439af8();
    if (cVar1 != '\0') {
      piVar3 = FUN_00423258(&local_10,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
      iVar4 = thunk_FUN_00440cb1((int)piVar3);
      if (iVar4 == *(int *)(local_8 + 0x50)) {
        local_64 = *(undefined4 *)(local_8 + 0x50);
        local_5c = local_10.x;
        local_58 = local_10.y;
        iVar4 = FUN_00442ce0();
        local_58 = local_58 + iVar4;
        local_54 = FUN_00440178();
        local_50 = *(int *)(local_8 + 0x4c);
        FUN_004241fc(*(int *)(local_8 + 0x50),local_84);
        pLVar7 = local_84;
        ptVar8 = &local_4c;
        for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
          ptVar8->left = *pLVar7;
          pLVar7 = pLVar7 + (uint)bVar9 * -2 + 1;
          ptVar8 = (tagRECT *)((int)ptVar8 + ((uint)bVar9 * -2 + 1) * 4);
        }
        (**(code **)(**(int **)(local_8 + 0x50) + 0x3c))(*(int **)(local_8 + 0x50),&local_18);
        local_20.x = 0;
        local_20.y = 0;
        piVar3 = *(int **)(*(int *)(local_8 + 0x50) + 0x24);
        if (piVar3 == (int *)0x0) {
          piVar3 = *(int **)(local_8 + 0x50);
          uVar6 = FUN_00402e8c(piVar3,(int)&PTR_TWinControl_vmt_000_00420fa8);
          if (((char)uVar6 != '\0') && (piVar3[0x59] != 0)) {
            ClientToScreen((HWND)piVar3[0x59],&local_20);
          }
        }
        else {
          (**(code **)(*piVar3 + 0x3c))(piVar3,&local_20);
        }
        OffsetRect(&local_4c,local_20.x - local_18,local_20.y - local_14);
        FUN_00424398(*(int **)(local_8 + 0x50),&local_10.x,&local_8c);
        local_3c = local_8c;
        local_38 = local_88;
        FUN_00440c7c(*(int *)(local_8 + 0x50),(int *)&local_94);
        FUN_00421c0c(local_94,&local_90);
        FUN_00403a50((int *)&local_2c,local_90);
        local_34 = 0;
        local_30 = *(UINT *)(local_8 + 100);
        local_60 = PTR_PTR_0044685c;
        local_28 = 0;
        iVar4 = FUN_00425780(*(int *)(local_8 + 0x50),0xb030,0,&local_64);
        local_21 = iVar4 == 0;
        uVar6 = extraout_ECX;
        if ((iVar4 == 0) && (*(short *)(local_8 + 0x10a) != 0)) {
          (**(code **)(local_8 + 0x108))
                    (*(undefined4 *)(local_8 + 0x10c),&local_2c,&local_21,&local_64);
          uVar6 = extraout_ECX_00;
        }
        if ((local_21 == false) || (*(int *)(local_8 + 0x50) == 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        *(undefined1 *)(local_8 + 0x48) = uVar2;
        if ((*(char *)(local_8 + 0x48) != '\0') && (local_2c != (undefined *)0x0)) {
          FUN_00442e34(local_60,local_8,uVar6,(int)&stack0xfffffffc);
          (**(code **)(**(int **)(local_8 + 0x74) + 0x68))
                    (*(int **)(local_8 + 0x74),*(undefined1 *)(*(int *)(local_8 + 0x50) + 0x4f));
          (**(code **)(**(int **)(local_8 + 0x74) + 0xc0))
                    (*(int **)(local_8 + 0x74),local_54,local_2c,&local_74,local_28);
          OffsetRect(&local_74,local_5c,local_58);
          cVar1 = FUN_00402ef0(*(int **)(local_8 + 0x74),extraout_EDX_00,extraout_ECX_01);
          if (cVar1 != '\0') {
            LVar5 = FUN_00417290(*(int **)(*(int *)(local_8 + 0x74) + 0x1f0),local_2c);
            local_74.left = local_74.left - (LVar5 + 5);
            LVar5 = FUN_00417290(*(int **)(*(int *)(local_8 + 0x74) + 0x1f0),local_2c);
            local_74.right = local_74.right - (LVar5 + 5);
          }
          FUN_0042436c(*(int **)(local_8 + 0x50),&local_4c.left,&local_8c);
          *(int *)(local_8 + 0x54) = local_8c;
          *(undefined4 *)(local_8 + 0x58) = local_88;
          FUN_0042436c(*(int **)(local_8 + 0x50),&local_4c.right,&local_8c);
          *(int *)(local_8 + 0x5c) = local_8c;
          *(undefined4 *)(local_8 + 0x60) = local_88;
          TLabel_set_Color(*(int *)(local_8 + 0x74),local_50);
          uVar6 = (**(code **)(**(int **)(local_8 + 0x74) + 0xbc))
                            (*(int **)(local_8 + 0x74),&local_74,local_2c,local_28);
          FUN_00440dc0(uVar6,extraout_EDX_01,extraout_ECX_02);
          if ((int)local_34 < 1) {
            FUN_00442ad4(local_8,local_30,1);
          }
          else {
            FUN_00442ad4(local_8,local_34,0);
          }
          goto LAB_004431f4;
        }
      }
    }
  }
  if ((int)local_34 < 1) {
    FUN_00442ca8(local_8);
  }
  else {
    FUN_00442ad4(local_8,local_34,0);
  }
LAB_004431f4:
  *in_FS_OFFSET = uStack_ac;
  pcStack_a4 = FUN_00443227;
  pcStack_a8 = (code *)0x443211;
  FUN_004039dc((int *)&local_94,2);
  pcStack_a8 = (code *)0x44321f;
  FUN_00404234((int)&local_64,(int)&DAT_0043975c);
  return;
}


