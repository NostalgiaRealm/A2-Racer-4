
/* ==== FUN_0052bbf0 @ 0052bbf0 ==== 
 * signature: undefined __cdecl FUN_0052bbf0(int param_1, int param_2, int param_3, int param_4, undefined4 * param_5, int param_6, undefined4 * param_7, undefined4 * param_8, int param_9)
 * body: 0052bbf0-0052bd0e
 */

void __cdecl
FUN_0052bbf0(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,int param_6,
            undefined4 *param_7,undefined4 *param_8,int param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int unaff_retaddr;
  
  puVar4 = param_5;
  iVar5 = param_1;
  iVar7 = 0;
  iVar3 = 0;
  if (0 < param_2) {
    do {
      param_5 = (undefined4 *)((int)param_5 + (int)*(char *)(iVar3 + param_1));
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  if (param_5 != param_7) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_project_005c2990);
    FUN_0051e8e0(5,(int *)0x0);
  }
  param_1 = 0;
  if (0 < param_2) {
    param_5 = param_8;
    puVar9 = puVar4;
    do {
      puVar8 = puVar9;
      if (*(char *)(param_1 + iVar5) == -1) {
        iVar7 = iVar7 + 1;
        puVar4 = puVar4 + 2;
        unaff_retaddr = iVar7;
LAB_0052bcce:
        puVar9 = puVar8;
        puVar6 = param_5;
        if ((int)puVar8 <= iVar7) break;
      }
      else {
        puVar6 = param_5 + 2;
        iVar3 = param_6;
        puVar1 = puVar4;
        puVar2 = param_5;
        if (*(char *)(param_1 + iVar5) != '\x01') {
          iVar7 = iVar7 + 1;
          unaff_retaddr = iVar7;
          puVar4 = puVar4 + 2;
joined_r0x0052bc9e:
          for (; param_5 = puVar6, iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar2 = *puVar1;
            puVar2[1] = puVar1[1];
            puVar1 = puVar1 + (int)puVar9 * 2;
            iVar7 = unaff_retaddr;
            puVar8 = param_7;
            puVar2 = puVar2 + param_9 * 2;
          }
          goto LAB_0052bcce;
        }
        if (iVar7 < (int)puVar9) goto joined_r0x0052bc9e;
      }
      param_5 = puVar6;
      param_1 = param_1 + 1;
      iVar5 = param_3;
    } while (param_1 < param_4);
  }
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_projectpoints__projected__d_p_005c2950);
  }
  return;
}


