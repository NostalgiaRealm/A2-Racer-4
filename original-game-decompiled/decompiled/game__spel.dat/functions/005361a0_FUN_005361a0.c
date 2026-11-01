
/* ==== FUN_005361a0 @ 005361a0 ==== 
 * signature: int __stdcall FUN_005361a0(void)
 * body: 005361a0-0053645a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005361a0(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  double *unaff_EDI;
  undefined4 local_20;
  undefined4 uStack_1c;
  double local_18;
  double local_10;
  
  iVar6 = 0;
  puVar3 = (undefined4 *)FUN_005142e0(DAT_0074c6e4);
  while (puVar3 != (undefined4 *)0x0) {
    piVar1 = (int *)puVar3[2];
    piVar5 = (int *)puVar3[3];
    iVar4 = puVar3[4];
    FUN_0051e2b0(puVar3,0x18);
    if ((piVar1[0x14] & 0x400U) == 0) {
      piVar1[0x14] = piVar1[0x14] & 0x9fffffff;
      if (DAT_0074c008 + -1 == DAT_0074cd50) {
        DAT_0074be68 = DAT_0074bff0;
        DAT_0074c788 = DAT_0074bff0;
      }
      if (iVar4 == 7) {
        DAT_0074cb90 = DAT_0074cb90 + 1;
        uVar2 = piVar5[0x14];
        while ((uVar2 & 0x400) != 0) {
          if (piVar5[8] == 0) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_merge_d_005c6030);
            FUN_005258d0(5,piVar1,piVar5);
          }
          piVar5 = (int *)piVar5[8];
          uVar2 = piVar5[0x14];
        }
        if (piVar1 == piVar5) {
          FUN_00534a30((int)piVar1);
        }
        else {
          if (1 < DAT_0074be68) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_merge_degenredundant__facet_f_005c5fec);
          }
          FUN_00537280(piVar1,piVar5,(double *)0x0,(double *)0x0,(int *)0x0);
          iVar6 = iVar6 + 1;
        }
      }
      else {
        iVar4 = FUN_00514af0((int *)piVar1[0xf]);
        if (iVar4 == 0) {
          DAT_0074c928 = DAT_0074c928 + 1;
          if (1 < DAT_0074be68) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_merge_degenredundant__facet_f_005c5fac);
          }
          FUN_005395a0((int)piVar1,0);
          iVar4 = piVar1[0xd];
          if (iVar4 != 0) {
            piVar5 = (int *)(iVar4 + 4);
            iVar4 = *(int *)(iVar4 + 4);
            while (iVar4 != 0) {
              piVar5 = piVar5 + 1;
              FUN_00514280(*(int **)(iVar4 + 0xc),(int)piVar1);
              if (*(int *)(*(int *)(iVar4 + 0xc) + 4) == 0) {
                DAT_0074c920 = DAT_0074c920 + 1;
                if (1 < DAT_0074be68) {
                  FUN_00558953(DAT_0074c5ec,(byte *)s_qh_merge_degenredundant__deleted_005c5f68);
                }
                *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) | 0x8000000;
                FUN_00514020(&DAT_0074c6f0,iVar4);
              }
              iVar4 = *piVar5;
            }
          }
          iVar6 = iVar6 + 1;
        }
        else if (iVar4 < DAT_0074c03c) {
          piVar5 = (int *)FUN_00535190(piVar1,(double *)&local_20,&local_10,&local_18,unaff_EDI);
          if (1 < DAT_0074be68) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_merge_degenredundant__facet_f_005c5f18);
          }
          FUN_00537280(piVar1,piVar5,&local_10,&local_18,(int *)0x0);
          iVar6 = iVar6 + 1;
          if (DAT_0074bf80 != 0) {
            _DAT_0074c918 = _DAT_0074c918 + (double)CONCAT44(uStack_1c,local_20);
            _DAT_0074c908 = _DAT_0074c908 + 1;
            if ((double)CONCAT44(_DAT_0074c914,_DAT_0074c910) < (double)CONCAT44(uStack_1c,local_20)
               ) {
              _DAT_0074c910 = local_20;
              _DAT_0074c914 = uStack_1c;
            }
          }
        }
      }
    }
    puVar3 = (undefined4 *)FUN_005142e0(DAT_0074c6e4);
  }
  return iVar6;
}


