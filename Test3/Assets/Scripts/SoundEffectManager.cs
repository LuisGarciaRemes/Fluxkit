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
    public AudioSource audioSource;
    public static SoundEffectManager Instance;
    // Use this for initialization
    private void Awake()
    {
        audioSource = GetComponent<AudioSource>();
        Instance = this;
    }
    public void Play(string Name)
    {
        if (!audioSource.isPlaying)
        {
            SoundEffectSources temp = new SoundEffectSources();
            foreach (SoundEffectSources t in soundEffectSource)
            {
                if (t.name == Name)
                {
                    temp = t;
                }
            }
            audioSource.PlayOneShot(temp.source);
        }
    }

}
