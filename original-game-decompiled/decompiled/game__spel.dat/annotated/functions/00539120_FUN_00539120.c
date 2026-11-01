
/* ==== FUN_00539120 @ 00539120 ==== 
 * signature: undefined __cdecl FUN_00539120(undefined4 * param_1, int * param_2)
 * body: 00539120-00539269
 */

void __cdecl FUN_00539120(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int unaff_ESI;
  int unaff_retaddr;
  undefined4 *puVar3;
  
  piVar1 = param_2;
  puVar3 = (undefined4 *)0x0;
  if (3 < DAT_0074be68) {
    FUN_0051eb30(s_MERGED_005c7038,(uint)param_2,0,(int *)0x0,0);
  }
  if (piVar1 == DAT_0074c61c) {
LAB_0053916a:
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_tracemerge__trace_facet_and_v_005c6fe8);
    if (piVar1 != DAT_0074c61c) {
      if ((DAT_0074c624 == 0) || (*(int *)(DAT_0074c624 + 0xc) == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(*(int *)(DAT_0074c624 + 0xc) + 4);
      }
      FUN_0051eb30(s_TRACE_005c69f8,(uint)DAT_0074c61c,uVar2,(int *)0x0,DAT_0074c624);
    }
  }
  else {
    if (DAT_0074c624 == 0) goto LAB_005391fb;
    if ((*(uint *)(DAT_0074c624 + 0x14) & 0x10000000) != 0) goto LAB_0053916a;
  }
  if (DAT_0074c624 != 0) {
    if ((*(uint *)(DAT_0074c624 + 0x14) & 0x8000000) == 0) {
      FUN_00517f30(DAT_0074c624);
    }
    else {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_tracemerge__trace_vertex_dele_005c6fb0);
    }
  }
LAB_005391fb:
  if ((DAT_0074c61c != (int *)0x0) &&
     (FUN_00517170(DAT_0074c61c,1,(uint *)&stack0xfffffffc,unaff_ESI,puVar3),
     puVar3 != (undefined4 *)0x0)) {
    FUN_0051e8e0(5,DAT_0074c61c);
  }
  if (((DAT_0074be2c != 0) || (3 < DAT_0074be68)) &&
     (FUN_00517170(piVar1,1,(uint *)&param_1,unaff_retaddr,param_1), param_1 != (undefined4 *)0x0))
  {
    FUN_0051e8e0(5,(int *)0x0);
  }
  return;
}


