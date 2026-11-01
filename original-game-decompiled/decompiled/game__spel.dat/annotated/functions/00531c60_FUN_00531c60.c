
/* ==== FUN_00531c60 @ 00531c60 ==== 
 * signature: undefined __cdecl FUN_00531c60(int * param_1, int * param_2, int * param_3, int * param_4, int * param_5)
 * body: 00531c60-0053212d
 */

void __cdecl FUN_00531c60(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  double local_10;
  double local_8;
  
  piVar2 = param_2;
  DAT_0074c738 = DAT_0074bf98;
  DAT_0074bf98 = 0;
  if ((DAT_0074be28 != 0) &&
     (((param_2 == (int *)0x4 || (param_2 == (int *)0x12)) || (param_2 == (int *)0x10)))) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__CDD_format_is_not_005c3d98);
  }
  piVar3 = param_5;
  piVar6 = param_4;
  piVar5 = param_3;
  if (piVar2 == (int *)0x0) {
    DAT_0074bf98 = DAT_0074c738;
    return;
  }
  if (piVar2 == (int *)0x2) {
    param_2 = (int *)FUN_0052db00((int)param_3,(int)param_4,(int)param_5);
    puVar4 = (undefined4 *)FUN_00528350(param_2);
    FUN_00558953(param_1,(byte *)s__d_1_005c3d90);
    FUN_00532a30(param_1,(char *)0x0,DAT_0074c03c,(int)puVar4,-1);
    FUN_0051e2b0(puVar4,DAT_0074c5f4);
    FUN_00514ba0((int *)&param_2);
    DAT_0074bf98 = DAT_0074c738;
    return;
  }
  if (piVar2 == (int *)0x1b) {
    if (DAT_0074be40 != 0) {
      FUN_00530190(param_1,(int)param_3,(int)param_4,(int)param_5);
      DAT_0074bf98 = DAT_0074c738;
      return;
    }
    if (DAT_0074c03c == 2) {
      FUN_00530010(param_1,(int)param_3,param_4,(int)param_5);
      DAT_0074bf98 = DAT_0074c738;
      return;
    }
    FUN_0052ff10(param_1,(int)param_3,(int)param_4,(int)param_5);
    DAT_0074bf98 = DAT_0074c738;
    return;
  }
  if (piVar2 == (int *)0x11) {
    FUN_00558953(param_1,(byte *)s_Options_selected_for_qhull__s____005bbf50);
    DAT_0074bf98 = DAT_0074c738;
    return;
  }
  if (piVar2 == (int *)&DAT_00000014) {
    if (DAT_0074c018 == 0) {
      FUN_00532b50(param_1,(int)param_3,(int)param_4,(int)param_5);
      DAT_0074bf98 = DAT_0074c738;
      return;
    }
  }
  else {
    if (piVar2 == (int *)0x15) {
      FUN_00558953(param_1,(byte *)s__s____s_005c3d84);
      DAT_0074bf98 = DAT_0074c738;
      return;
    }
    if (piVar2 == (int *)0x16) {
      FUN_00558953(param_1,&DAT_005c3d7c);
      FUN_00558953(param_1,(byte *)s__6_16g_005c1958);
      FUN_00558953(param_1,(byte *)s__6_16g_005c1958);
      FUN_00558953(param_1,&DAT_005ae60c);
      DAT_0074bf98 = DAT_0074c738;
      return;
    }
    if (piVar2 == (int *)0x17) {
      FUN_0052cd70((int)param_3,(int)param_4,(int)param_5,&local_20,&local_14,&local_18,&local_1c,
                   &local_24);
      param_2 = (int *)FUN_0052db00((int)piVar5,(int)piVar6,(int)piVar3);
      FUN_00514af0(param_2);
      FUN_00514af0(DAT_0074c6ec);
      FUN_00558953(param_1,(byte *)s_7__d__d__d__d__d__d__d_2_005c3d60);
      FUN_00514ba0((int *)&param_2);
      FUN_0052b650(0,&local_8,&local_10);
      FUN_00558953(param_1,(byte *)s__6_16g__6_16g_005c3d50);
      DAT_0074bf98 = DAT_0074c738;
      return;
    }
    if (piVar2 == (int *)0x1a) {
      FUN_00533440(param_1,(int)param_3,(int)param_4,(int)param_5);
      DAT_0074bf98 = DAT_0074c738;
      return;
    }
    if (DAT_0074c018 != 0) {
      if (piVar2 == (int *)0x10) {
        FUN_005336e0(param_1,0x10,(int)param_3,(int)param_4,param_5);
        DAT_0074bf98 = DAT_0074c738;
        return;
      }
      if (piVar2 == (int *)0x7) {
        FUN_0052ea40(param_1,7,(int)param_3,(int)param_4,(int)param_5);
        FUN_005336e0(param_1,7,(int)piVar5,(int)piVar6,piVar3);
        FUN_0052fb30(param_1,7,(int)piVar5,(int)piVar6,(int)piVar3);
        DAT_0074bf98 = DAT_0074c738;
        return;
      }
      if (((piVar2 == (int *)0x19) || (piVar2 == (int *)0x9)) || (piVar2 == (int *)0xc)) {
        FUN_005330d0(param_1,piVar2,(int)param_3,(int)param_4,(int)param_5);
        DAT_0074bf98 = DAT_0074c738;
        return;
      }
    }
  }
  FUN_0052ea40(param_1,(int)piVar2,(int)param_3,(int)param_4,(int)param_5);
  piVar6 = piVar5;
  for (; (piVar5 != (int *)0x0 && (piVar6 = param_3, piVar5[0xc] != 0)); piVar5 = (int *)piVar5[0xc]
      ) {
    FUN_0052e290(param_1,(int)piVar2,piVar5,(int)piVar3);
    piVar6 = param_3;
  }
  if (param_4 != (int *)0x0) {
    piVar5 = param_4 + 1;
    piVar1 = (int *)param_4[1];
    piVar6 = param_3;
    while (param_3 = piVar6, piVar1 != (int *)0x0) {
      piVar5 = piVar5 + 1;
      FUN_0052e290(param_1,(int)piVar2,piVar1,(int)piVar3);
      piVar6 = param_3;
      piVar1 = (int *)*piVar5;
    }
  }
  FUN_0052fb30(param_1,piVar2,(int)piVar6,(int)param_4,(int)piVar3);
  DAT_0074bf98 = DAT_0074c738;
  return;
}


