
/* ==== FUN_0051eb30 @ 0051eb30 ==== 
 * signature: undefined __cdecl FUN_0051eb30(undefined4 param_1, uint param_2, uint param_3, int * param_4, int param_5)
 * body: 0051eb30-0051eca0
 */

void __cdecl FUN_0051eb30(undefined4 param_1,uint param_2,uint param_3,int *param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (DAT_0074c5ec != (int *)0x0) {
    if (param_2 != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s__s_FACET__005bea88);
      FUN_00530290(DAT_0074c5ec,param_2);
    }
    if ((param_3 != 0) && (DAT_0074c5ec != (int *)0x0)) {
      FUN_00558953(DAT_0074c5ec,(byte *)s__s_OTHER_FACET__005bea74);
      FUN_00530290(DAT_0074c5ec,param_3);
    }
    if (param_4 != (int *)0x0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s__s_RIDGE__005bea68);
      FUN_00532f80(DAT_0074c5ec,param_4);
      uVar1 = param_4[1];
      if (((uVar1 != 0) && (uVar1 != param_2)) && (uVar1 != param_3)) {
        FUN_00530290(DAT_0074c5ec,uVar1);
      }
      uVar1 = param_4[2];
      if (((uVar1 != 0) && (uVar1 != param_2)) && (uVar1 != param_3)) {
        FUN_00530290(DAT_0074c5ec,uVar1);
      }
      if (param_2 == 0) {
        param_2 = param_4[1];
      }
      if ((param_3 == 0) && (param_3 = param_4[1], param_3 == param_2)) {
        param_3 = param_4[2];
      }
    }
    if (param_5 != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s__s_VERTEX__005bea5c);
      FUN_00533230(DAT_0074c5ec,param_5);
    }
    if ((((DAT_0074c5e8 != (int *)0x0) && (DAT_0074be4c != 0)) && (param_2 != 0)) &&
       ((DAT_0074c6bc == 0 && (DAT_0074be68 == 0)))) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_ERRONEOUS_and_NEIGHBORING_FACETS_005bea30);
      puVar2 = &DAT_0074bf08;
      do {
        FUN_005328f0(DAT_0074c5e8,(int *)*puVar2,param_2,param_3,(int *)0x0);
        puVar2 = puVar2 + 1;
      } while ((int)puVar2 < 0x74bf78);
    }
  }
  return;
}


