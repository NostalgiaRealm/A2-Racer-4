
/* ==== FUN_005152b0 @ 005152b0 ==== 
 * signature: undefined __cdecl FUN_005152b0(undefined4 * param_1)
 * body: 005152b0-0051540b
 */

void __cdecl FUN_005152b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (4 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_delfacet__delete_f_d_005ba430);
  }
  if (param_1 == DAT_0074c61c) {
    DAT_0074c61c = (undefined4 *)0x0;
  }
  if (param_1 == DAT_0074c664) {
    DAT_0074c664 = (undefined4 *)0x0;
  }
  FUN_00516530((int)param_1);
  if (param_1[6] != 0) {
    DAT_0074c79c = DAT_0074c79c + 1;
    puVar1 = (undefined4 *)(DAT_0074c768 + *(int *)(DAT_0074c770 + DAT_0074c5f4 * 4) * 4);
    *(undefined4 *)param_1[6] = *puVar1;
    *puVar1 = param_1[6];
  }
  iVar2 = DAT_0074c5f4;
  if (DAT_0074c65c == 1) {
    iVar2 = DAT_0074c5f8;
  }
  if (param_1[10] != 0) {
    DAT_0074c79c = DAT_0074c79c + 1;
    puVar1 = (undefined4 *)(DAT_0074c768 + *(int *)(DAT_0074c770 + iVar2 * 4) * 4);
    *(undefined4 *)param_1[10] = *puVar1;
    *puVar1 = param_1[10];
  }
  FUN_005145f0(param_1 + 0xf);
  if (param_1[0xe] != 0) {
    FUN_005145f0(param_1 + 0xe);
  }
  FUN_005145f0(param_1 + 0xd);
  if (param_1[0x10] != 0) {
    FUN_005145f0(param_1 + 0x10);
  }
  if (param_1[0x11] != 0) {
    FUN_005145f0(param_1 + 0x11);
  }
  if (param_1 != (undefined4 *)0x0) {
    DAT_0074c79c = DAT_0074c79c + 1;
    puVar1 = (undefined4 *)(DAT_0074c768 + *(int *)(DAT_0074c770 + 0x160) * 4);
    *param_1 = *(undefined4 *)(DAT_0074c768 + *(int *)(DAT_0074c770 + 0x160) * 4);
    *puVar1 = param_1;
  }
  return;
}


