
/* ==== FUN_00532f80 @ 00532f80 ==== 
 * signature: undefined __cdecl FUN_00532f80(int * param_1, int * param_2)
 * body: 00532f80-00533012
 */

void __cdecl FUN_00532f80(int *param_1,int *param_2)

{
  FUN_00558953(param_1,(byte *)s___r_d_005c5018);
  if ((param_2[3] & 0x2000000U) != 0) {
    FUN_00558953(param_1,(byte *)s_tested_005c3c70);
  }
  if ((param_2[3] & 0x4000000U) != 0) {
    FUN_00558953(param_1,(byte *)s_nonconvex_005c500c);
  }
  FUN_00558953(param_1,&DAT_005ae60c);
  FUN_005333d0(param_1,s_vertices__005c4ff4,*param_2);
  if ((param_2[1] != 0) && (param_2[2] != 0)) {
    FUN_00558953(param_1,(byte *)s_between_f_d_and_f_d_005c4fd4);
  }
  return;
}


