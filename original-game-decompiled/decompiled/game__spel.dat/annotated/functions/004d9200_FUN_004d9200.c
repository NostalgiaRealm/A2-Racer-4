
/* ==== FUN_004d9200 @ 004d9200 ==== 
 * signature: undefined4 * __fastcall FUN_004d9200(undefined4 * param_1)
 * body: 004d9200-004d922a
 */

undefined4 * __fastcall FUN_004d9200(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_005778dc;
  param_1[3] = 10000;
  pvVar1 = _malloc(10000);
  param_1[1] = pvVar1;
  param_1[2] = 0;
  return param_1;
}


