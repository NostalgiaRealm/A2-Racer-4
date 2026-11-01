
/* ==== FUN_00518fd0 @ 00518fd0 ==== 
 * signature: undefined __cdecl FUN_00518fd0(int * param_1)
 * body: 00518fd0-005192dc
 */

void __cdecl FUN_00518fd0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  double local_20;
  double local_18;
  double dStack_10;
  
  local_20 = 1.79769313486232e+308;
  FUN_005180c0(param_1);
  FUN_0051a5a0(0);
  DAT_0074c608 = DAT_0074c600;
  DAT_0074c5f0 = (double *)FUN_00528350(param_1);
  piVar5 = DAT_0074c600;
  FUN_00528970((uint)DAT_0074c600);
  DAT_0074cc20 = DAT_0074cc20 + 1;
  FUN_005273a0(DAT_0074c5f0,(int)piVar5,&local_18);
  piVar2 = DAT_0074c600;
  piVar3 = DAT_0074c600;
  piVar5 = DAT_0074c600;
  if (0.0 < local_18) {
    for (; (piVar3 = DAT_0074c600, piVar5 = DAT_0074c600, piVar2 != (int *)0x0 && (piVar2[0xc] != 0)
           ); piVar2 = (int *)piVar2[0xc]) {
      piVar2[0x14] = piVar2[0x14] ^ 0x800;
    }
  }
  for (; (DAT_0074c600 = piVar5, piVar3 != (int *)0x0 && (piVar3[0xc] != 0));
      piVar3 = (int *)piVar3[0xc]) {
    FUN_00528970((uint)piVar3);
    piVar5 = DAT_0074c600;
  }
  if (piVar5 != (int *)0x0) {
LAB_005190a3:
    if (piVar5[0xc] != 0) {
      iVar4 = FUN_005151d0((int)piVar5,(double *)0x0,1);
      if (iVar4 != 0) goto code_r0x005190bb;
      if (0 < DAT_0074be68) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_initialhull__initial_orientat_005bc1f0);
      }
      piVar5[0x14] = piVar5[0x14] & 0xffff7fff;
      for (piVar5 = DAT_0074c600; (piVar5 != (int *)0x0 && (piVar5[0xc] != 0));
          piVar5 = (int *)piVar5[0xc]) {
        piVar5[0x14] = piVar5[0x14] ^ 0x800;
        FUN_0052b5e0((int)piVar5);
      }
    }
  }
LAB_0051911e:
  piVar5 = DAT_0074c600;
  if (DAT_0074c600 != (int *)0x0) {
    do {
      if (piVar5[0xc] == 0) break;
      iVar4 = FUN_005151d0((int)piVar5,(double *)0x0,0);
      if (iVar4 == 0) {
        FUN_00526a20();
        if (DAT_0074c5ec != (int *)0x0) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_precision_error__initial_f_005bc170);
        }
        FUN_0051e8e0(2,piVar5);
      }
      iVar4 = piVar5[0xf];
      if (iVar4 != 0) {
        iVar1 = *(int *)(iVar4 + 4);
        piVar2 = (int *)(iVar4 + 8);
        while (iVar1 != 0) {
          fVar6 = FUN_005282b0((double *)piVar5[6],*(double **)(iVar1 + 0x18));
          if (fVar6 < (float10)local_20) {
            local_20 = (double)fVar6;
          }
          iVar1 = *piVar2;
          piVar2 = piVar2 + 1;
        }
      }
      piVar5 = (int *)piVar5[0xc];
    } while (piVar5 != (int *)0x0);
    if (local_20 < -0.98) {
      dStack_10 = local_20 + 1.0;
      DAT_0074c4e0 = 1;
      FUN_0051df40(s__narrow_hull_005bc160,0,(int)&dStack_10);
      if (((local_20 < -0.9999) && (DAT_0074bfc4 == 0)) && (DAT_0074bf04 != 0)) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_precision_warning__The_ini_005bc00c);
      }
    }
  }
  DAT_0074cc88 = DAT_0074c03c + 1;
  FUN_00517af0(DAT_0074c600);
  FUN_00516cc0((int)DAT_0074c600,1);
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_initialhull__simplex_construc_005bbfd4);
    iVar4 = 0;
    if (0 < DAT_0074c03c) {
      do {
        FUN_00558953(DAT_0074c5ec,(byte *)s__6_4g_005bbfcc);
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_0074c03c);
    }
    FUN_00558953(DAT_0074c5ec,&DAT_005ae60c);
  }
  return;
code_r0x005190bb:
  piVar5 = (int *)piVar5[0xc];
  if (piVar5 == (int *)0x0) goto LAB_0051911e;
  goto LAB_005190a3;
}


