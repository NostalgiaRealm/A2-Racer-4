
/* ==== FUN_0054c5da @ 0054c5da ==== 
 * signature: void * __fastcall FUN_0054c5da(void * param_1)
 * body: 0054c5da-0054c600
 */

void * __fastcall FUN_0054c5da(void *param_1)

{
  int iVar1;
  
  if (*(FILE **)((int)param_1 + 0x50) != (FILE *)0x0) {
    iVar1 = FUN_005588fd(*(FILE **)((int)param_1 + 0x50));
    if (iVar1 == 0) {
      FUN_0054c601(param_1,0,2);
      return param_1;
    }
  }
  return (void *)0x0;
}


