
/* ==== __break @ 100155cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 100155cf-100155cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


