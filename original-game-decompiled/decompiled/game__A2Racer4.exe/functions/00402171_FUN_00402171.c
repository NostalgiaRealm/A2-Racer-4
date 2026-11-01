
/* ==== FUN_00402171 @ 00402171 ==== 
 * signature: undefined4 __cdecl FUN_00402171(int * param_1)
 * body: 00402171-0040217d
 */

undefined4 __cdecl FUN_00402171(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}


