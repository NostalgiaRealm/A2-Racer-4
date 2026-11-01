
/* ==== FUN_00535350 @ 00535350 ==== 
 * signature: undefined __cdecl FUN_00535350(int param_1, undefined4 * param_2)
 * body: 00535350-00535574
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00535350(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  double dVar4;
  int *piVar5;
  int *piVar6;
  double *unaff_EDI;
  int iVar7;
  int *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  double local_18;
  double local_10;
  
  iVar7 = 0;
  local_24 = 0;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_flippedmerges__begin_005c5c0c);
  }
  for (; (param_1 != 0 && (*(int *)(param_1 + 0x30) != 0)); param_1 = *(int *)(param_1 + 0x30)) {
    if (((*(uint *)(param_1 + 0x50) & 0x8000) != 0) && ((*(uint *)(param_1 + 0x50) & 0x400) == 0)) {
      FUN_005344e0(param_1,param_1,4,(undefined4 *)0x0);
    }
  }
  local_28 = FUN_00514c70();
  DAT_0074c6e0 = FUN_00514b50(DAT_0074c5fc);
  FUN_00514ce0(local_28);
  if (local_28 != (int *)0x0) {
    piVar6 = local_28 + 1;
    iVar1 = local_28[1];
    piVar5 = local_28;
    while (iVar1 != 0) {
      piVar6 = piVar6 + 1;
      piVar2 = *(int **)(iVar1 + 8);
      if ((*(int *)(iVar1 + 0x10) == 4) && ((piVar2[0x14] & 0x400U) == 0)) {
        if (DAT_0074c008 + -1 == DAT_0074cd50) {
          DAT_0074be68 = DAT_0074bff0;
          DAT_0074c788 = DAT_0074bff0;
        }
        piVar5 = (int *)FUN_00535190(piVar2,(double *)&local_20,&local_10,&local_18,unaff_EDI);
        if (DAT_0074be68 != 0) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qh_flippedmerges__merge_flipped_f_005c5bc8);
        }
        FUN_00537280(piVar2,piVar5,&local_10,&local_18,(int *)0x0);
        local_24 = local_24 + 1;
        if (DAT_0074bf80 != 0) {
          dVar4 = (double)CONCAT44(uStack_1c,local_20);
          _DAT_0074ca40 = _DAT_0074ca40 + dVar4;
          _DAT_0074ca30 = _DAT_0074ca30 + 1;
          if (_DAT_0074ca38 < dVar4) {
            _DAT_0074ca38 = dVar4;
          }
        }
        FUN_005361a0();
        piVar5 = local_28;
      }
      iVar7 = local_24;
      iVar1 = *piVar6;
    }
    if (piVar5 != (int *)0x0) {
      piVar6 = piVar5 + 1;
      puVar3 = (undefined4 *)piVar5[1];
      while (puVar3 != (undefined4 *)0x0) {
        piVar6 = piVar6 + 1;
        if (((*(uint *)(puVar3[2] + 0x50) & 0x400) == 0) &&
           ((*(uint *)(puVar3[3] + 0x50) & 0x400) == 0)) {
          FUN_00514020(&DAT_0074c6e0,(int)puVar3);
        }
        else {
          FUN_0051e2b0(puVar3,0x18);
        }
        puVar3 = (undefined4 *)*piVar6;
      }
    }
  }
  FUN_00514ba0((int *)&local_28);
  if (iVar7 != 0) {
    *param_2 = 1;
  }
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_flippedmerges__merged__d_flip_005c5b84);
  }
  return;
}


