
/* ==== FUN_0040b554 @ 0040b554 ==== 
 * signature: undefined __register FUN_0040b554(int * param_1, LPCVOID param_2)
 * body: 0040b554-0040b5c8
 */

void FUN_0040b554(int *param_1,LPCVOID param_2)

{
  undefined *puVar1;
  HINSTANCE hInstance;
  UINT uID;
  CHAR *lpBuffer;
  int cchBufferMax;
  CHAR local_440 [64];
  byte local_400 [1024];
  
  FUN_0040b3cc(param_1,param_2,local_400,(byte *)0x400);
  lpBuffer = local_440;
  if (*PTR_DAT_004ab91c == '\0') {
    cchBufferMax = 0x40;
    uID = *(UINT *)(PTR_PTR_004ab6d0 + 4);
    hInstance = (HINSTANCE)FUN_004052c0(DAT_004ac4dc);
    LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
    MessageBoxA((HWND)0x0,(LPCSTR)local_400,local_440,0x2010);
  }
  else {
    puVar1 = (undefined *)FUN_00405df8(PTR_DAT_004ab71c,(char *)local_400);
    FUN_00405d7b(puVar1);
    FUN_0040284c();
  }
  return;
}


