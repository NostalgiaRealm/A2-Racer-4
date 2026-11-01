
/* ==== FUN_0040a8c0 @ 0040a8c0 ==== 
 * signature: undefined __register FUN_0040a8c0(int * param_1, LPCVOID param_2)
 * body: 0040a8c0-0040a934
 */

void FUN_0040a8c0(int *param_1,LPCVOID param_2)

{
  undefined *puVar1;
  HINSTANCE hInstance;
  UINT uID;
  CHAR *lpBuffer;
  int cchBufferMax;
  CHAR local_440 [64];
  byte local_400 [1024];
  
  FUN_0040a738(param_1,param_2,local_400,(byte *)0x400);
  lpBuffer = local_440;
  if (*PTR_DAT_00446ccc == '\0') {
    cchBufferMax = 0x40;
    uID = *(UINT *)(PTR_PTR_00446b00 + 4);
    hInstance = (HINSTANCE)FUN_00404d50(DAT_004474d4);
    LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
    MessageBoxA((HWND)0x0,(LPCSTR)local_400,local_440,0x2010);
  }
  else {
    puVar1 = (undefined *)FUN_00405840(PTR_DAT_00446b3c,(char *)local_400);
    FUN_004057c3(puVar1);
    FUN_00402788();
  }
  return;
}


