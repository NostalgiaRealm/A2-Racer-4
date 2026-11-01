
/* ==== FUN_00474cb0 @ 00474cb0 ==== 
 * signature: undefined __register FUN_00474cb0(int param_1, int * param_2, int * param_3, char param_4, byte param_5)
 * body: 00474cb0-00474d69
 */

void FUN_00474cb0(int param_1,int *param_2,int *param_3,char param_4,byte param_5)

{
  int iVar1;
  HDC pHVar2;
  HIMAGELIST p_Var3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  COLORREF CVar8;
  COLORREF CVar9;
  UINT UVar10;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
      if (iVar1 != 0) {
        iVar1 = FUN_0047474c(param_1,param_5);
        if ((param_4 == '\0') && (param_5 != 3)) {
          UVar10 = 0;
          CVar9 = 0x1fffffff;
          CVar8 = FUN_00417d54(0x8000000f);
          iVar7 = 0;
          iVar6 = 0;
          iVar5 = param_3[1];
          iVar4 = *param_3;
          pHVar2 = (HDC)FUN_004194d8(param_2);
          p_Var3 = (HIMAGELIST)FUN_0043a5b8(*(int **)(param_1 + 8));
          ImageList_DrawEx(p_Var3,iVar1,pHVar2,iVar4,iVar5,iVar6,iVar7,CVar8,CVar9,UVar10);
        }
        else {
          UVar10 = 1;
          CVar9 = 0x1fffffff;
          CVar8 = 0x1fffffff;
          iVar7 = 0;
          iVar6 = 0;
          iVar5 = param_3[1];
          iVar4 = *param_3;
          pHVar2 = (HDC)FUN_004194d8(param_2);
          p_Var3 = (HIMAGELIST)FUN_0043a5b8(*(int **)(param_1 + 8));
          ImageList_DrawEx(p_Var3,iVar1,pHVar2,iVar4,iVar5,iVar6,iVar7,CVar8,CVar9,UVar10);
        }
      }
    }
  }
  return;
}


