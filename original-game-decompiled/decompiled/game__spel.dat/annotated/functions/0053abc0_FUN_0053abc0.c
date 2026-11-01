
/* ==== FUN_0053abc0 @ 0053abc0 ==== 
 * signature: undefined __fastcall FUN_0053abc0(int param_1)
 * body: 0053abc0-0053abdb
 */

void __fastcall FUN_0053abc0(int param_1)

{
  void *pvVar1;
  void *this;
  
  this = *(void **)(param_1 + 8);
  while (this != (void *)0x0) {
    pvVar1 = *(void **)((int)this + 0x7c);
    FUN_0053ac00(this,1,1);
    this = pvVar1;
  }
  return;
}


