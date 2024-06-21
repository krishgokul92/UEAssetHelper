class UAssetBPLibrary : public UBlueprintFunctionLibrary
{
 GENERATED_BODY()
 UFUNCTION(BlueprintCallable, Category = "Asset Tools")
 static void ChangeCollisionPreset(UStaticMesh* StaticMesh);
 
};
