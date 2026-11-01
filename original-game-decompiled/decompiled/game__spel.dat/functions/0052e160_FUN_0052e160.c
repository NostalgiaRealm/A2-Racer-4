
/* ==== FUN_0052e160 @ 0052e160 ==== 
 * signature: undefined __cdecl FUN_0052e160(int param_1)
 * body: 0052e160-0052e280
 */

void __cdecl FUN_0052e160(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_4;
  
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_order_vertexneighbors__order_n_005c31d4);
  }
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = FUN_00514af0(*(int **)(param_1 + 0xc));
  local_4 = FUN_00514b50(iVar2);
  piVar3 = (int *)FUN_005142e0((int *)*piVar1);
  FUN_00514020(&local_4,(int)piVar3);
  iVar2 = FUN_00514af0((int *)*piVar1);
  do {
    if (iVar2 == 0) {
      FUN_005145f0(piVar1);
      FUN_00514c70();
      *piVar1 = local_4;
      return;
    }
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      piVar5 = (int *)(iVar2 + 4);
      piVar4 = *(int **)(iVar2 + 4);
      while (piVar4 != (int *)0x0) {
        piVar5 = piVar5 + 1;
        iVar2 = FUN_00514680(piVar3[0xf],(int)piVar4);
        if (iVar2 != 0) {
          FUN_00514280((int *)*piVar1,(int)piVar4);
          FUN_00514020(&local_4,(int)piVar4);
          piVar3 = piVar4;
          if (piVar4 != (int *)0x0) goto LAB_0052e252;
          break;
        }
        piVar4 = (int *)*piVar5;
      }
    }
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_order_v_005c3184);
    FUN_0051e8e0(5,piVar3);
    piVar4 = piVar3;
LAB_0052e252:
    iVar2 = FUN_00514af0((int *)*piVar1);
    piVar3 = piVar4;
  } while( true );
}


