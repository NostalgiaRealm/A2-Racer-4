
/* ==== FUN_00405298 @ 00405298 ==== 
 * signature: undefined __register FUN_00405298(undefined4 * param_1, int * param_2)
 * body: 00405298-004052ed
 */

void FUN_00405298(undefined4 *param_1,int *param_2)

{
  HINSTANCE hInstance;
  uint uVar1;
  UINT uID;
  CHAR *lpBuffer;
  int cchBufferMax;
  CHAR local_408 [1024];
  
  lpBuffer = local_408;
  if (param_1 != (undefined4 *)0x0) {
    if ((int)param_1[1] < 0x10000) {
      cchBufferMax = 0x400;
      uID = param_1[1];
      hInstance = (HINSTANCE)FUN_00404d50(*(int *)*param_1);
      uVar1 = LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
      FUN_00403aa0(param_2,(undefined4 *)local_408,uVar1);
    }
    else {
      FUN_00403b70(param_2,(char *)param_1[1]);
    }
  }
  return;
}


