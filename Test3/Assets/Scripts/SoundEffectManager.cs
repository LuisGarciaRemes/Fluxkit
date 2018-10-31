using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class SoundEffectManager : MonoBehaviour {
    [System.Serializable]
    public struct SoundEffectSources
    {
        public string name;
        public AudioClip source;
    }
    public SoundEffectSources[] soundEffectSource;
    public static SoundEffectManager Instance;
    // Use this for initialization
    private void Awake()
    {
        Instance = this;
    }
    public void Play(string Name,Vector3 Postion)
    {
        SoundEffectSources temp = new SoundEffectSources();
        foreach (SoundEffectSources t in soundEffectSource){
            if (t.name == Name) {
                temp = t;
            }
        }
            AudioSource.PlayClipAtPoint(temp.source, Postion);
    }
    public void Play(string Name) {
        SoundEffectSources temp = new SoundEffectSources();
        foreach (SoundEffectSources t in soundEffectSource)
        {
            if (t.name == Name)
            {
                temp = t;
            }
        }
        AudioSource.PlayClipAtPoint(temp.source, new Vector3(0, 0, 0));
    }

}
