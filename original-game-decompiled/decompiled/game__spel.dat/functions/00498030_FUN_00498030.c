
/* ==== FUN_00498030 @ 00498030 ==== 
 * signature: undefined4 __thiscall FUN_00498030(void * this, int * param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 00498030-00498071;00498075-004980a7;004980ab-0049833d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00498072-00498074 004980a8-004980aa
 */

uint __thiscall
FUN_00498030(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *_Str1;
  undefined4 uVar7;
  int *piVar8;
  char *_Str2;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  
  iVar9 = param_4;
  iVar3 = param_2;
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Not_enough_texture_memor_005ae044);
  }
  piVar1 = operator_new(param_2 * param_4 * 4);
  piVar2 = param_1;
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Could_not_create_detail_t_005ae0bc);
  }
  if (0 < iVar3) {
    param_1 = (int *)iVar3;
    piVar8 = piVar1;
    do {
      iVar12 = iVar9;
      piVar11 = piVar8;
      if (0 < iVar9) {
        for (; iVar3 = param_2, iVar12 != 0; iVar12 = iVar12 + -1) {
          *piVar11 = (int)piVar2;
          piVar11 = piVar11 + 1;
        }
      }
      piVar8 = piVar8 + iVar9;
      piVar2 = (int *)((int)piVar2 << 1);
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  iVar12 = 0;
  iVar3 = (iVar3 + -1) * iVar9;
  param_1 = piVar1;
  do {
    if (iVar3 < iVar12) {
LAB_004981a1:
      iVar12 = iVar12 + -1;
      param_5 = iVar12;
      iVar3 = (*(code *)**(undefined4 **)((int)this + 0x18))();
      param_3 = 0;
      param_2 = iVar3;
      if (0 < iVar3) {
        do {
          iVar9 = 0;
          if (0 < *(int *)this) {
            piVar2 = piVar1 + iVar12;
            do {
              param_1 = (int *)**(undefined4 **)((int)this + 0xc);
              iVar3 = iVar9;
              if (0 < iVar9) {
                do {
                  FUN_00448fd0(&param_1,&param_4);
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              _Str2 = "";
              if (*(char **)(param_1[2] + 4) != (char *)0x0) {
                _Str2 = *(char **)(param_1[2] + 4);
              }
              puVar6 = (undefined4 *)**(undefined4 **)((int)this + 0x20);
              iVar3 = param_3;
              if (0 < param_3) {
                do {
                  puVar6 = (undefined4 *)*puVar6;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              _Str1 = *(char **)(puVar6[2] + 4);
              if (_Str1 == (char *)0x0) {
                _Str1 = "";
              }
              iVar3 = __strcmpi(_Str1,_Str2);
              if (iVar3 == 0) {
                *(int *)(*(int *)((int)this + 0x14) + iVar9 * 4) = *piVar2;
                iVar9 = *(int *)this;
                param_5 = param_5 + 1;
                piVar2 = piVar2 + 1;
              }
              iVar9 = iVar9 + 1;
              iVar3 = param_2;
              iVar12 = param_5;
            } while (iVar9 < *(int *)this);
          }
          param_3 = param_3 + 1;
        } while (param_3 < iVar3);
      }
      iVar3 = 0;
      if (0 < *(int *)this) {
        piVar2 = piVar1 + iVar12;
        do {
          if (*(int *)(*(int *)((int)this + 0x14) + iVar3 * 4) == -1) {
            *(int *)(*(int *)((int)this + 0x14) + iVar3 * 4) = *piVar2;
            FUN_004c3fa0((byte *)s_Assigning__d_005ae124);
            piVar2 = piVar2 + 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)this);
      }
      iVar3 = 0;
      if (0 < *(int *)this) {
        iVar9 = 0;
        do {
          iVar12 = iVar3;
          if (0 < iVar9) {
            do {
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          FUN_004c3fa0((byte *)s_Texture__s_used__d__d_with_bytes_005ae134);
          iVar9 = iVar9 + 4;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)this);
      }
      FUN_004c3fa0((byte *)s_Total_bytes___d_005ae15c);
      uVar7 = FUN_0054b339(piVar1);
      return CONCAT31((int3)((uint)uVar7 >> 8),1);
    }
    iVar10 = 0;
    param_2 = 0;
    if (iVar12 < iVar12 + iVar9) {
      piVar2 = param_1;
      iVar4 = (iVar12 + iVar9) - iVar12;
      do {
        param_2 = iVar4;
        iVar10 = iVar10 + (DAT_00740974 >> 3) * *piVar2 * *piVar2;
        piVar2 = piVar2 + 1;
        iVar4 = param_2 + -1;
        iVar9 = param_4;
        param_2 = iVar10;
      } while (iVar4 != 0);
    }
    iVar10 = param_2;
    if ((char)param_5 != '\0') {
      lVar13 = __ftol();
      iVar10 = iVar10 + (int)lVar13;
    }
    FUN_004c3fa0((byte *)s_Checking_config_using__d_with__d_005ae100);
    if (param_3 < iVar10) {
      if (iVar12 == 0) {
        uVar5 = FUN_0054b339(piVar1);
        return uVar5 & 0xffffff00;
      }
      goto LAB_004981a1;
    }
    iVar12 = iVar12 + 1;
    param_1 = param_1 + 1;
  } while( true );
}


